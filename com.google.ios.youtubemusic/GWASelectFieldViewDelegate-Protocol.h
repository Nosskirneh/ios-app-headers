//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWASelectFieldView, NSString;

@protocol GWASelectFieldViewDelegate <NSObject>
- (void)selectFieldView:(GWASelectFieldView *)arg1 didSetText:(NSString *)arg2;

@optional
- (void)selectFieldViewDoneButtonPressed:(GWASelectFieldView *)arg1;
@end
