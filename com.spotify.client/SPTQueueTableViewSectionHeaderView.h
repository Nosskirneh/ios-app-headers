//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, GLUESectionHeaderStyle, NSArray, NSString;
@protocol SPTQueueTableViewSectionHeaderViewDelegate;

@interface SPTQueueTableViewSectionHeaderView : UITableViewHeaderFooterView <GLUEStyleable>
{
    id <SPTQueueTableViewSectionHeaderViewDelegate> _delegate;
    GLUELabel *_titleLabel;
    GLUESectionHeaderStyle *_style;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) GLUESectionHeaderStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTQueueTableViewSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeConstraints;
- (void)createConstraintsIfNeeded;
- (void)glue_applyStyle:(id)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)setFrame:(struct CGRect)arg1;
- (id)textLabel;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

