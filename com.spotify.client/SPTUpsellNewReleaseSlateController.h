//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"
#import "SPTUpsellOverlayContentViewDelegate-Protocol.h"
#import "SPTUpsellOverlayController-Protocol.h"

@class NSString, SPTUpsellDismissAction, SPTUpsellGLUETheme, SPTUpsellOverlayViewModel;
@protocol SPTSlate, SPTSlateBuilderProvider, SPTSlateManager, SPTUpsellOverlayControllerDelegate;

@interface SPTUpsellNewReleaseSlateController : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTUpsellOverlayContentViewDelegate, SPTUpsellOverlayController>
{
    _Bool _presented;
    id <SPTUpsellOverlayControllerDelegate> _delegate;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTUpsellOverlayViewModel *_viewModel;
    SPTUpsellGLUETheme *_theme;
    id <SPTSlate> _slate;
    SPTUpsellDismissAction *_dismissAction;
}

@property(retain, nonatomic) SPTUpsellDismissAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) SPTUpsellGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTUpsellOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) __weak id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) __weak id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) __weak id <SPTUpsellOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissUpsellOverlayContentUnit;
- (void)slateDidDismiss:(id)arg1;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (id)titleForSlate:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)provideSlate;
- (_Bool)present;
- (id)initWithViewModel:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 dismissAction:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

