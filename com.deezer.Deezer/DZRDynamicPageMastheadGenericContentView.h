//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRDynamicPageMastheadContentView.h"

#import "_TtP6Deezer24IllustrationViewDelegate_-Protocol.h"

@class UILabel, _TtC6Deezer16IllustrationView;

@interface DZRDynamicPageMastheadGenericContentView : DZRDynamicPageMastheadContentView <_TtP6Deezer24IllustrationViewDelegate_>
{
    UILabel *_titleLabel;
    _TtC6Deezer16IllustrationView *_logoView;
}

@property(retain, nonatomic) _TtC6Deezer16IllustrationView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)illustrationView:(id)arg1 didChangeImage:(id)arg2 animated:(_Bool)arg3 forIllustration:(id)arg4;
- (void)layoutSubviews;
- (void)populateWithSection:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
