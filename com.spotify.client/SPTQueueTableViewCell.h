//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GLUEEntityRow.h"

@class GLUEEntityRowView, NSString, UIView, UIView<GLUEEntityRowContent>;

@interface SPTQueueTableViewCell : UITableViewCell <GLUEEntityRow>
{
    GLUEEntityRowView *_rowView;
}

@property(readonly, nonatomic) GLUEEntityRowView *rowView; // @synthesize rowView=_rowView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) unsigned long long state;
@property(retain, nonatomic) UIView *trailingAccessoryView;
@property(retain, nonatomic) UIView<GLUEEntityRowContent> *entityContentView;
@property(retain, nonatomic) UIView *leadingAccessoryView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

