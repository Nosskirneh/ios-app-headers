//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMBaseProcessor.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString;

@interface IMCommProcessor : IMBaseProcessor <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
}

- (void)firePostToSocialStatus:(_Bool)arg1 forScheme:(id)arg2;
- (void)postToSocialWithParams:(id)arg1 withScheme:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendEmailWithParams:(id)arg1 withScheme:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)sendSMSWithParams:(id)arg1 withScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

