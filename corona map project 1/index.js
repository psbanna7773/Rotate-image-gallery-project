function updateMap()
{
fetch("https://api.covidtracking.com/v1/states/ca/info.json")
.then(response => response.json())
.then(rsp =>{
    console.log(rsp.data)
    rsp.data.forEach(element => {
        latitude = element.latitude;
        latitude = element.latitude;
        longitude = element.longitude;
    });
})
}
// Import via ES6 modules
import * as THREE from 'three';
import { computeBoundsTree, disposeBoundsTree, acceleratedRaycast } from 'three-mesh-bvh';

// Or UMD
const { computeBoundsTree, disposeBoundsTree, acceleratedRaycast } = window.MeshBVHLib;


// Add the extension functions
THREE.BufferGeometry.prototype.computeBoundsTree = computeBoundsTree;
THREE.BufferGeometry.prototype.disposeBoundsTree = disposeBoundsTree;
THREE.Mesh.prototype.raycast = acceleratedRaycast;

// Generate geometry and associated BVH
const geom = new THREE.TorusKnotBufferGeometry( 10, 3, 400, 100 );
const mesh = new THREE.Mesh( geom, material );
geom.computeBoundsTree();

updateMap(); 























