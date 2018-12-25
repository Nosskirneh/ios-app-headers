//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOBottomSheetControllerDelegate-Protocol.h"
#import "GRWMessagingContentControllerDelegate-Protocol.h"
#import "GRWMessagingDisplayPresentation-Protocol.h"

@class GOOBottomSheetController, GRWMessage, NSString;

@interface GRWMessagingDisplayPreferredRatingsBottomSheet : NSObject <GOOBottomSheetControllerDelegate, GRWMessagingContentControllerDelegate, GRWMessagingDisplayPresentation>
{
    CDUnknownBlockType _actionHandler;
    GRWMessage *_message;
    GOOBottomSheetController *_bottomSheetController;
}

@property(nonatomic) __weak GOOBottomSheetController *bottomSheetController; // @synthesize bottomSheetController=_bottomSheetController;
@property(retain, nonatomic) GRWMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)dismissWithAction:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)userDidTakeAction:(id)arg1;
- (void)bottomSheetControllerDidCancel:(id)arg1;
- (_Bool)canPresentMessage:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentMessage:(id)arg1 withActionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
