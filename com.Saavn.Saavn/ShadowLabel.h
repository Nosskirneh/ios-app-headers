//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface ShadowLabel : UILabel
{
    float shadowBlur;
    UIColor *shadowColor;
    struct CGSize shadowOffset;
}

- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)showShadow:(_Bool)arg1;
- (void)setShadowColor:(id)arg1 blur:(float)arg2 andOffset:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

