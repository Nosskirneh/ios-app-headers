//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Card.h"

@interface ListCard : Card
{
    unsigned long long _roundedCornerState;
}

+ (unsigned long long)cornerBitMaskForRoundedCornerState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long roundedCornerState; // @synthesize roundedCornerState=_roundedCornerState;
- (void)layoutSubviews;
- (void)setupCardShape;

@end
