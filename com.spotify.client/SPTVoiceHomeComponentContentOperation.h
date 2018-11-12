//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"
#import "SPTVoiceHomeViewModelDelegate-Protocol.h"

@class NSString;
@protocol EXP_HUBContentOperationDelegate;

@interface SPTVoiceHomeComponentContentOperation : NSObject <EXP_HUBContentOperation, SPTVoiceHomeViewModelDelegate>
{
    _Bool _addVoiceComponent;
    id <EXP_HUBContentOperationDelegate> delegate;
}

@property(nonatomic) _Bool addVoiceComponent; // @synthesize addVoiceComponent=_addVoiceComponent;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)appendVoiceComponent;
- (void)addVoiceComponentToViewModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

