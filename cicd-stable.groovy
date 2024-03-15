node('linux')
{
  stage ('Poll') {
    checkout([
      $class: 'GitSCM',
      branches: [[name: '*/main']],
      doGenerateSubmoduleConfigurations: false,
      extensions: [],
      userRemoteConfigs: [[url: 'https://github.com/ZOSOpenTools/boostport.git']]])
  }
  stage('Build') {
    build job: 'Port-Pipeline', parameters: [string(name: 'PORT_GITHUB_REPO', value: 'https://github.com/ZOSOpenTools/boostport.git'), string(name: 'PORT_DESCRIPTION', value: 'The project aims at generating [D[D[D[D[D[D[D[D[D[D[Dporting boost librai[Dries to Z operating system' ), string(name: 'BUILD_LINE', value: 'STABLE') ]
  }
}
