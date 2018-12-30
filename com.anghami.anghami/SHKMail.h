//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSString;

@interface SHKMail : SHKSharer <MFMailComposeViewControllerDelegate>
{
}

+ (_Bool)canShare;
+ (_Bool)requiresAuthentication;
+ (_Bool)shareRequiresInternetConnection;
+ (_Bool)canShareFile;
+ (_Bool)canShareImage;
+ (_Bool)canShareURL;
+ (_Bool)canShareText;
+ (id)sharerTitle;
+ (id)sharerIcon;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (_Bool)sendMail;
- (_Bool)send;
- (_Bool)shouldAutoShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
