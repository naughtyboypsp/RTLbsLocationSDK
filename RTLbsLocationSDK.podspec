

Pod::Spec.new do |s|

  s.name         = "RTLbsLocationSDK"
  s.version      = "1.0"
  s.summary      = "A short description of MapSDK."
  s.requires_arc = true
  s.description  = <<-DESC
                   It is RTLbsLocationSDK for WD
                   DESC
  s.source_files = 'RTLbsLocationSDK/*'
  s.source       = { :git => "https://github.com/naughtyboypsp/RTLbsLocationSDK.git", :tag => s.version.to_s }

  s.homepage     = "https://github.com/naughtyboypsp/RTLbsLocationSDK.git"
  s.resources    = ['**/*.zip','**/*.dat']

  s.license      = "MIT "
  s.author       = { "潘书鹏" => "perry_pan@163.com" }
  s.platform     = :ios, "7.0"

  s.libraries = 'xml2', 'z' ,'iconv','resolv', 'c++', 'stdc++', 'icucore', 'sqlite3'
  s.framework = 'CoreBluetooth', 'CoreLocation', 'MobileCoreServices', 'MapKit', 'OpenGLES', 'Security', 'SystemConfiguration', 'CoreMotion', 'Foundation', 'ImageIO', 'CoreImage'

  s.vendored_library = 'RTLbsLocationSDK/RTLbsLocation.a'

end
