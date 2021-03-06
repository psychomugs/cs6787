""" This file defines an environment for the Box2D 2 Link Arm simulator. """
import Box2D as b2
import numpy as np
import sys
from skimage.transform import resize
from skimage import color
# sys.path.append('/home/dev/scratch/worldmodels/world-models/gps/gps/python/gps/agent/box2d')
# from .framework import Framework
from gps.agent.box2d.settings import fwSettings
from gps.proto.gps_pb2 import RGB_IMAGE, RGB_IMAGE_SIZE, ACTION, IMAGE_FEAT
import gym
from gym import wrappers

class CarWorld:
    """ This class defines the car and its environment."""
    name = "Car"
    def __init__(self, x0, _, render):
        self.env = gym.make('CarRacing-v0')
        # self.env = wrappers.Monitor(self.env, 'monitor-folder', force=True)
        self.render = render # bool
        self.world = self.env.world #b2.b2World(gravity=(0, -10), doSleep=True)
        self.last_reward = 0
        self.cum_reward = 0
        # self.world.gravity = (0.0, 0.0)

        self.x0 = self.env.reset()


    def run(self):
        """Initiates the first time step
        """
        if self.render:
            # super(CarWorld, self).run()
            self.run_next(None)
        else:
            self.run_next(None)

    def run_next(self, action):
        """Moves forward in time one step. Calls the renderer if applicable."""
        state, self.last_reward, done, info = self.env.step(action)
        self.cum_reward += self.last_reward
        if self.render:
            # super(CarWorld, self).run_next(action)
            self.env.render()
        else:
            return

    def Step(self, settings, action):
        """Moves forward in time one step. Called by the renderer"""
        raise NotImplementedError('This is calling car_world.Step')
        self.joint1.motorSpeed = action[0]
        self.joint2.motorSpeed = action[1]

        self.Step(settings)

    def reset_world(self):
        """Returns the world to its intial state"""
        self.env.close()
        self.env.reset()

    def resize(self, obs):
        return resize(color.rgb2gray(obs), (8, 4)).flatten()


    def get_state(self):
        """Retrieves the state of the point mass"""
        # state = {JOINT_ANGLES: np.array([self.joint1.angle,
        #                                  self.joint2.angle]),
        #          JOINT_VELOCITIES: np.array([self.joint1.speed,
        #                                      self.joint2.speed]),
        #          END_EFFECTOR_POINTS: np.append(np.array(self.body2.position),[0])}
        try:
                state = self.resize(self.env.render("state_pixels"))
        except:
            import pdb; pdb.set_trace()
        packed_state = {RGB_IMAGE: state, "REWARD": np.expand_dims(-self.last_reward,axis=0)}
        return packed_state

