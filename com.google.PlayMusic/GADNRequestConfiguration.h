//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GADNRequestConfiguration : NSObject
{
    NSString *_maxAdContentRating;
    NSNumber *_underAgeOfConsent;
}

@property(copy, nonatomic) NSNumber *underAgeOfConsent; // @synthesize underAgeOfConsent=_underAgeOfConsent;
@property(copy, nonatomic) NSString *maxAdContentRating; // @synthesize maxAdContentRating=_maxAdContentRating;
- (void).cxx_destruct;
- (void)tagForUnderAgeOfConsent:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

