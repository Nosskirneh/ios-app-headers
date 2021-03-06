//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TV4MMSConfiguration : NSObject
{
    NSString *_tv4Host;
    NSString *_comScoreAppName;
    NSString *_comScorePublisherSecret;
    NSString *_comScoreCustomerC2;
    NSString *_mmsClientNumber;
    NSString *_mmsSubsite;
}

+ (id)createConfigFromJson:(id)arg1;
+ (id)configurationFromFile;
@property(retain, nonatomic) NSString *mmsSubsite; // @synthesize mmsSubsite=_mmsSubsite;
@property(retain, nonatomic) NSString *mmsClientNumber; // @synthesize mmsClientNumber=_mmsClientNumber;
@property(retain, nonatomic) NSString *comScoreCustomerC2; // @synthesize comScoreCustomerC2=_comScoreCustomerC2;
@property(retain, nonatomic) NSString *comScorePublisherSecret; // @synthesize comScorePublisherSecret=_comScorePublisherSecret;
@property(retain, nonatomic) NSString *comScoreAppName; // @synthesize comScoreAppName=_comScoreAppName;
@property(retain, nonatomic) NSString *tv4Host; // @synthesize tv4Host=_tv4Host;
- (void).cxx_destruct;

@end

