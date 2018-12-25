//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActionSheetControllerDelegate-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMapTable, NSString, YTActionSheetController, YTCommandResponderEvent, YTIButtonRenderer, YTImpactFeedbackGenerator;
@protocol YTInnerTubeUIGlobals, YTMenuRendererUpdater, YTResponder;

@interface YTMenuController : NSObject <YTActionSheetControllerDelegate, YTHotConfigObserver, YTResponder>
{
    id <YTInnerTubeUIGlobals> _globals;
    id <YTMenuRendererUpdater> _menuRendererUpdater;
    YTImpactFeedbackGenerator *_impactFeedbackGenerator;
    _Bool _hideMoreLikeThisMenuItem;
    YTIButtonRenderer *_menuTitleButtonRenderer;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTActionSheetController *_actionSheetController;
    YTCommandResponderEvent *_feedbackResponderEvent;
    NSMapTable *_dismissalBlockMapping;
}

@property(retain, nonatomic) NSMapTable *dismissalBlockMapping; // @synthesize dismissalBlockMapping=_dismissalBlockMapping;
@property(retain, nonatomic) YTCommandResponderEvent *feedbackResponderEvent; // @synthesize feedbackResponderEvent=_feedbackResponderEvent;
@property(retain, nonatomic) YTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)actionSheetDidDisappear:(id)arg1;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (_Bool)shouldDisplayActionSheet;
- (void)dismissActionSheet:(id)arg1;
- (id)newActionSheetControllerWithMessage:(id)arg1 fromView:(id)arg2;
- (id)newContactActionSheetControllerWithMessage:(id)arg1 fromView:(id)arg2;
- (id)toggleMenuItemWithServiceItemRenderer:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3;
- (id)menuItemWithServiceItemRenderer:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3;
- (id)menuItemWithNavigationItemRenderer:(id)arg1 fromView:(id)arg2 entry:(id)arg3 firstResponder:(id)arg4;
- (id)actionsForRenderers:(id)arg1 fromView:(id)arg2 entry:(id)arg3 firstResponder:(id)arg4;
- (void)didPressMenuTitleButton:(id)arg1;
- (id)customViewForRenderer:(id)arg1 fromView:(id)arg2 entry:(id)arg3 firstResponder:(id)arg4;
- (void)prepareToShowMenu_regular;
- (void)prepareToShowMenu_compact;
- (void)prepareToShowMenu;
- (void)dismiss;
- (void)showMenuWithMenuRenderer:(id)arg1 fromView:(id)arg2 entry:(id)arg3 dismissalBlock:(CDUnknownBlockType)arg4 addCancelAction:(_Bool)arg5 firstResponder:(id)arg6;
- (void)showMenuWithMenuRenderer:(id)arg1 fromView:(id)arg2 entry:(id)arg3 dismissalBlock:(CDUnknownBlockType)arg4 firstResponder:(id)arg5;
- (void)showMenuWithMenuRenderer:(id)arg1 fromView:(id)arg2 entry:(id)arg3 firstResponder:(id)arg4;
- (void)showContactMenuWithMenuRenderer:(id)arg1 fromView:(id)arg2 entry:(id)arg3 contactHeaderButton:(id)arg4 firstResponder:(id)arg5;
- (id)styleContext;
- (void)dealloc;
- (id)initWithMenuRendererUpdater:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

