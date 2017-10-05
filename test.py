import build.Release.test_module as test_module
import faulthandler

faulthandler.enable()
test_module.test_error()
