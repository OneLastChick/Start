import numpy as np
from scipy.spatial import Delaunay
import matplotlib.pyplot as plt

points=np.array([
    [3,4],
    [6,6],
    [1,1],
    [8,8]
])

simplices=Delaunay(points).simplices

plt.triplot(points[:,0],points[:,1],simplices)
plt.scatter(points[:,0],points[:,1],color='r')

plt.show()

