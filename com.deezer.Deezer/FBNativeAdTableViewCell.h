//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBNativeAdView;

@interface FBNativeAdTableViewCell : UITableViewCell
{
    FBNativeAdView *_nativeAdView;
}

+ (Class)specializeCellForType:(long long)arg1 forAttributes:(id)arg2;
@property(nonatomic) __weak FBNativeAdView *nativeAdView; // @synthesize nativeAdView=_nativeAdView;
- (void).cxx_destruct;
- (void)populate:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithType:(long long)arg1 withAttributes:(id)arg2 reuseIdentifier:(id)arg3;
- (id)attributes;
- (long long)type;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

