//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADBannerView, UIImageView, UIWebView;

@interface Spotlight : UIView
{
    GADBannerView *ad;
    _Bool isAdLoaded;
    UIWebView *adwebView;
    _Bool hideShell;
    UIImageView *noWork;
}

@property(retain, nonatomic) UIWebView *adwebView; // @synthesize adwebView;
@property(retain, nonatomic) GADBannerView *ad; // @synthesize ad;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)baseInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 hideShell:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
