//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "_TtP6Deezer9Animating_-Protocol.h"

@interface _TtC6Deezer17ActivityIndicator : UIImageView <_TtP6Deezer9Animating_>
{
    // Error parsing type: , name: hidesWhenStopped
    // Error parsing type: , name: dzrIsAnimating
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)dzrStopAnimating;
- (void)dzrStartAnimating;
- (void)stopAnimating;
- (void)startAnimating;
@property(nonatomic) _Bool dzrIsAnimating; // @synthesize dzrIsAnimating;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped;

@end
