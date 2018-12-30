//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKOAuthSharer.h"

#import "SHKFormControllerLargeTextFieldDelegate-Protocol.h"

@class NSString;

@interface SHKLinkedIn : SHKOAuthSharer <SHKFormControllerLargeTextFieldDelegate>
{
}

+ (_Bool)canAutoShare;
+ (_Bool)canShare;
+ (_Bool)canShareText;
+ (_Bool)canShareURL;
+ (id)sharerTitle;
- (void)sendTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)sendTicket:(id)arg1 didFinishWithData:(id)arg2;
- (_Bool)send;
- (_Bool)validateItem;
- (void)sendForm:(id)arg1;
- (void)show;
- (void)showSHKTextForm;
- (void)tokenAccessModifyRequest:(id)arg1;
- (void)tokenAccess:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

