# ericsson-actia

The git contains a folder named externals. That should replace the externals package when the installation of the ACU6-PRO is fully completed. The content of the SUPL-client folder should be pushed to a git and then pulled from it if not set up locally. The .mk file (externals/myproj/package/supl-3gpp-lpp-client) for the SUPL-client should be edited so it pulls the correct version. Change version and source, so it points correctly. Recommend trying to set it up locally though, otherwise you must push changes to git and change the version in the .mk file for every change. 
