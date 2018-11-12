//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTFreeTierCollectionTabControlProtocol-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTFreeTierCollectionGLUETheme, SPTTheme, UIStackView;
@protocol SPTFreeTierCollectionTabControlDelegate;

@interface SPTFreeTierCollectionTabControlCompact : UIView <SPTFreeTierCollectionTabControlProtocol>
{
    unsigned long long _selectedSegmentIndex;
    id <SPTFreeTierCollectionTabControlDelegate> _delegate;
    NSArray *_items;
    SPTFreeTierCollectionGLUETheme *_theme;
    SPTTheme *_catTheme;
    UIView *_selectionIndicator;
    UIStackView *_stackView;
    NSLayoutConstraint *_selectionIndicatorLeftConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *selectionIndicatorLeftConstraint; // @synthesize selectionIndicatorLeftConstraint=_selectionIndicatorLeftConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(retain, nonatomic) SPTFreeTierCollectionGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SPTFreeTierCollectionTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)tabChanged:(id)arg1;
- (void)insertSegments:(id)arg1;
- (void)transitionTab:(double)arg1 scrollDirection:(unsigned long long)arg2;
- (void)removeAllSegments;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

