//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "SPObjectRepresentation-Protocol.h"
#import "SPTMetaViewControllerPresentable-Protocol.h"

@class NSString;

@interface UINavigationController (SPObjectRepresentation) <SPObjectRepresentation, SPTMetaViewControllerPresentable>
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)findCameraButton;
- (_Bool)sta_pressCameraButton;
- (_Bool)sta_isCameraButtonVisible;
- (void)setNavigationBarHiddenLegacy:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=spt_referrerIdentifierForActiveViewController) NSString *referrerIdentifierForTopViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

