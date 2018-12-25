//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface YTAppPromoInfoCard : NSObject
{
    NSString *_appName;
    NSString *_price;
    double _rating;
    NSURL *_iconURL;
}

@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) double rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)initWithAppName:(id)arg1 price:(id)arg2 rating:(double)arg3 iconURL:(id)arg4;

@end
