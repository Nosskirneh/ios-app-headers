//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSString, UILabel;

@interface IASKSlider : UISlider
{
    NSString *_key;
    UILabel *_valueLabel;
    NSString *_unit;
}

@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) __weak UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
