//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, RHPlayerController;

@interface RHPrivacyPolicyUpdateController : NSObject
{
    _Bool _privacyAcceptancePageOnScreen;
    _Bool _privacyAcceptancePageUserDidAccept;
    CDUnknownBlockType _completionCallback;
    CDUnknownBlockType _onShowCallback;
    NSError *_privacyAcceptancePageError;
}

@property(retain, nonatomic) NSError *privacyAcceptancePageError; // @synthesize privacyAcceptancePageError=_privacyAcceptancePageError;
@property(nonatomic) _Bool privacyAcceptancePageUserDidAccept; // @synthesize privacyAcceptancePageUserDidAccept=_privacyAcceptancePageUserDidAccept;
@property(nonatomic) _Bool privacyAcceptancePageOnScreen; // @synthesize privacyAcceptancePageOnScreen=_privacyAcceptancePageOnScreen;
@property(copy, nonatomic) CDUnknownBlockType onShowCallback; // @synthesize onShowCallback=_onShowCallback;
@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
- (void).cxx_destruct;
- (void)done;
- (id)setPrivacyPolicyUpdateAccepted;
- (void)onPrivacyPageDismissedWithError:(id)arg1 userDidAccept:(_Bool)arg2;
- (void)startCheck;
@property(readonly, nonatomic) RHPlayerController *playerController;
- (id)appDelegate;
- (void)dealloc;
- (id)initWithOnShowCallback:(CDUnknownBlockType)arg1 completionCallback:(CDUnknownBlockType)arg2;

@end

