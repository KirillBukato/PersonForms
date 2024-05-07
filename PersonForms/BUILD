load("@rules_qt//:qt.bzl", "qt_cc_binary", "qt_ui_library", "qt_cc_library")
load("@pip//:requirements.bzl", "requirement")

qt_cc_binary(
    name = "main",
    srcs = ["main.cpp",],
    deps = [
        ":mainwindow",
        ":mainwindow_ui",
        "@rules_qt//:qt_core",
        "@rules_qt//:qt_qml",
        "@rules_qt//:qt_widgets",
    ],
    copts = ["-std=c++17",],
)

qt_cc_library(
    name = "mainwindow",
    srcs = [
        "mainwindow.cpp",
    ],
    hdrs = [
         "PersonData.h", "BodyData.h", "mainwindow.h"
    ],
    deps = [
        ":mainwindow_ui",
        "@rules_qt//:qt_widgets",
    ]
)

qt_ui_library(
    name = "mainwindow_ui",
    ui = "mainwindow.ui",
    deps = [
        "@rules_qt//:qt_widgets",
    ]
)

