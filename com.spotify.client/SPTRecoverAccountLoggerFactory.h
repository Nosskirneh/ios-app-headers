//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTLoginLogger;

@interface SPTRecoverAccountLoggerFactory : NSObject
{
    id <SPTLoginLogger> _logger;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)provideBannerLogger;
- (id)provideSetNewPasswordLogger;
- (id)initWithLogger:(id)arg1 logCenter:(id)arg2;

@end

