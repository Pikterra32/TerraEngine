if ! [ -d "./build" ]; then
    mkdir build
fi

# TODO: fix engine crashing when using hardware rendering
export LIBGL_ALWAYS_SOFTWARE=1

make

# launch engine
build/TerraEngine
