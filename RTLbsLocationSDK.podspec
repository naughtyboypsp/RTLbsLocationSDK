

Pod::Spec.new do |s|

  s.name         = "RTLbsLocationSDK"
  s.version      = "1.0"
  s.summary      = "SDL for RTLbsLocation used on iOS"
  s.requires_arc = true
  s.description  = <<-DESC
                   A short description of RTLbsLocationSDK.Tell you how to use RTLbsLocationSDK.In WD ffan APP,We must use RTLbsLocationSDK.
                   DESC
  s.source_files = 'RTLbsLocationSDK/*'
  s.source       = { :git => "https://github.com/naughtyboypsp/RTLbsLocationSDK.git", :tag => s.version.to_s }

  s.homepage     = "https://github.com/naughtyboypsp/RTLbsLocationSDK"
  s.resources    = ['**/*.zip','**/*.dat']

  s.license      = "MIT "
  s.author       = { "潘书鹏" => "perry_pan@163.com" }
  s.platform     = :ios, "7.0"

  s.libraries = 'xml2', 'z' ,'iconv','resolv', 'c++', 'stdc++', 'icucore', 'sqlite3'
  s.framework = 'CoreBluetooth', 'CoreLocation', 'MobileCoreServices', 'MapKit', 'OpenGLES', 'Security', 'SystemConfiguration', 'CoreMotion', 'Foundation', 'ImageIO', 'CoreImage'

  s.vendored_library = 'RTLbsLocationSDK/RTLbsLocation.a'

end
