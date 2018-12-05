#
#  Be sure to run `pod spec lint TMSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

# ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
s.name         = "HMNewsManager"
s.version      = "0.0.5"
s.summary      = "HM新闻组件"
s.homepage     = "https://github.com/jonieson/HMChannelModule.git"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "RWW" => "2439535923@qq.com" }
s.platform     = :ios
s.platform     = :ios, "9.0"
s.source       = { :git => "https://github.com/jonieson/HMChannelModule.git", :tag => s.version }
s.source_files = 'Frameworks/HMNewsManager.framework/Headers/*.{h}'
s.ios.vendored_frameworks = 'Frameworks/HMNewsManager.framework'
s.resources = "Frameworks/HMNewsModuleSource.bundle"
s.requires_arc = true
s.xcconfig = { 'VALID_ARCHS' =>  'arm64 x86_64', }
#s.dependency "TMSDK"
s.dependency "AFNetworking"
s.dependency "SDWebImage"
s.dependency "MJRefresh"
s.dependency "SDAutoLayout"
s.dependency "IQKeyboardManager"

s.frameworks = "UIKit"


end
