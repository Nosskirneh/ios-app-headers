//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_TtP6Deezer24IllustrationViewDelegate_-Protocol.h"

@class _TtC6Deezer16IllustrationView;

@interface DZRSubscriptionLogoView : UIView <_TtP6Deezer24IllustrationViewDelegate_>
{
    _TtC6Deezer16IllustrationView *_logoIllustrationView;
}

@property(retain, nonatomic) _TtC6Deezer16IllustrationView *logoIllustrationView; // @synthesize logoIllustrationView=_logoIllustrationView;
- (void).cxx_destruct;
- (void)illustrationView:(id)arg1 didChangeImage:(id)arg2 animated:(_Bool)arg3 forIllustration:(id)arg4;
- (void)refreshLogo;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

