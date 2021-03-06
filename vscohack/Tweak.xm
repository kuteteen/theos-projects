#import <UIKit/UIKit.h>

// VSCOLibraryDataSource
%hook VSCOSync

-(BOOL) enabled
{
	%log(@"ENABLED?");
	return false;
}


-(BOOL) enabledOverCellular
{
	%log(@"ENABLED?");
	return false;
}

%end



%hook AppDelegate

-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
	BOOL result = %orig(arg1, arg2);
	dispatch_async(dispatch_get_main_queue(), ^{
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"CRACKED!"
												 	message:@"Cracked by Slavik Nychkalo"
												 	delegate:nil
												 	cancelButtonTitle:@"Thanks!"
												 	otherButtonTitles:nil];
		[alert show];
		[alert release];
	});
	return result;
}

%end