
import Blender
from Blender import Mesh
import bpy

def addMeshToScene(scn, mesh, loc, name):
    ob = scn.objects.new(mesh, name)
    ob.setLocation(*loc)

sce = bpy.data.scenes.active
me = Mesh.Primitives.Cube(2.0)

addMeshToScene(sce, me, [1, 0, 0], "Cube")

Blender.Redraw()
