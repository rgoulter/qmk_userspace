{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
    buildInputs = [
        pkgs.qmk

        # needed for clang-format
        pkgs.clang-tools
    ];
}
