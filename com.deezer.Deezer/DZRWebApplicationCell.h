//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerCell.h"

@class UIButton, _TtC6Deezer16IllustrationView;
@protocol DZRWebApplicationCellDelegate;

@interface DZRWebApplicationCell : DeezerCell
{
    id <DZRWebApplicationCellDelegate> _delegate;
    _TtC6Deezer16IllustrationView *_illustrationView;
    UIButton *_optionButton;
}

@property(retain, nonatomic) UIButton *optionButton; // @synthesize optionButton=_optionButton;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
@property(nonatomic) __weak id <DZRWebApplicationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)optionButtonTouched;
- (void)populateWithWebApplication:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

