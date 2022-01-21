# A1Backyard

This is an example of a game backyard (i.e. inter-player discovery service) written in C++ using https://github.com/mlomb/MetaCPP -alike code generation for serialization and rpc decoding (libclang basically).

It is quite old, it heavily uses code not included in the repository, and I would totally write it differently now (at least a state machine!), but showing this would at least provide the context of my thinking about "good" code. That is the direction I see debuggable and maintainable code lying in.

Since then I got rid of stl usage and replace handles approach with ecs architecture, but I currently do not intend on showing off my home brew engine more than what is shown in this repository. :)
