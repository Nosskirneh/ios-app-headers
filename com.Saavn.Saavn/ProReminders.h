//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVC_n.h"

@class NSString;

@interface ProReminders : SaavnVC_n
{
    NSString *title;
    NSString *copy;
    _Bool _isDormantPeriodExpired;
    int _dormancyState;
}

@property(nonatomic) _Bool isDormantPeriodExpired; // @synthesize isDormantPeriodExpired=_isDormantPeriodExpired;
@property(nonatomic) int dormancyState; // @synthesize dormancyState=_dormancyState;
- (void).cxx_destruct;
- (void)noThanks;
- (void)goPro;
- (void)buildView;
- (void)initCopy;
- (void)viewDidLoad;

@end

