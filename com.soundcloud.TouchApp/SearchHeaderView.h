//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionReusableViewWithDivider.h"

#import "SizeableView-Protocol.h"

@class NSString, UIButton, UILabel;

@interface SearchHeaderView : CollectionReusableViewWithDivider <SizeableView>
{
    CDUnknownBlockType _actionHandler;
    UILabel *_titleLabel;
    UIButton *_helpButton;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)setupHelpButtonImage;
- (void)userDidSelectHelp:(id)arg1;
- (void)setHelpButtonHidden:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

