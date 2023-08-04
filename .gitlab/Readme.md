# Evaluation of Lab Results
1. Issues as checklists
   
    Templates for the evaluation of the individual lab sessions are stored in the GitLab project of the students. If you access the project via GitLab's website, you can create an *Issue* with a template: click *Issues* in the bar on the left and then open a new ticket. In the window that appears, you can select one of the available templates: e.g.: CheckListLab_1.
  These issues can be used for documentation and you can see whether students have completed the task in detail.
  The checklist always contains a `[ ]` in front. If you replace the space in the brackets with an `x`, it will be ticked.
2. Badges ![](https://img.shields.io/badge/SE-is_great-green)

   Badges offer the possibility to set a mark in the GitLab quick overview so that you can quickly see whether, for example, the attestation for a lab session has been issued. To make this easy, there is an HTML page `Badges.html` in the `.gitlab/Badges` folder with badges for Labs. If you open this page in the browser, you can copy the desired badge by clicking on it.
   Then the copied link must be pasted into GitLab under: Settings -> Badges (on the right!). Paste the copied link under "Link" and under "Badge-Bild-Url" and confirm.
   If it worked, you can now see the badge in the Project Overview.

   Note: In order for badges to be assigned by supervisors - but not changeable by students - the students must have the "Developer" role in the GitLab project (and the supervisors is maintainer or owner). However, the students as developers are not allowed to write on the master branch. In order for this to work, the protection of the master branch must be removed under Settings->Repository->Protected Branches.

