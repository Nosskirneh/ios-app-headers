//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UAInAppMessageControllerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIColor;

@interface UAInAppMessageControllerDefaultDelegate : NSObject <UAInAppMessageControllerDelegate>
{
    _Bool _isInverted;
    long long _position;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    NSArray *_layoutConstraints;
    CDUnknownBlockType _updateLayoutConstraintsBlock;
    long long _lastHorizontalSizeClass;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) long long lastHorizontalSizeClass; // @synthesize lastHorizontalSizeClass=_lastHorizontalSizeClass;
@property(nonatomic) _Bool isInverted; // @synthesize isInverted=_isInverted;
@property(copy, nonatomic) CDUnknownBlockType updateLayoutConstraintsBlock; // @synthesize updateLayoutConstraintsBlock=_updateLayoutConstraintsBlock;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)messageView:(id)arg1 animateOutWithParentView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)messageView:(id)arg1 animateInWithParentView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)messageView:(id)arg1 didChangeTouchState:(_Bool)arg2;
- (id)messageView:(id)arg1 buttonAtIndex:(unsigned long long)arg2;
- (void)updateSizeClassConstraints:(id)arg1 messageView:(id)arg2;
- (id)viewForMessage:(id)arg1 parentView:(id)arg2;
- (id)buildMessageViewForMessage:(id)arg1;
- (id)localizedButtonTitleForKey:(id)arg1;
- (void)uninvertColorsWithMessageView:(id)arg1;
- (void)invertColorsWithMessageView:(id)arg1;
- (void)configureColorsWithMessageView:(id)arg1 inverted:(_Bool)arg2;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
