//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZServerMessage, NSArray, NSDictionary, NSString;

@interface DZServerInformation : NSObject
{
    _Bool _lastRelease;
    _Bool _shouldUseGzip;
    long long _timeDifferenceBetweenServerAndApp;
    DZServerMessage *_serverMessage;
    unsigned long long _serverPolicy;
    NSDictionary *_urlsConfiguration;
    NSArray *_domainURLs;
    unsigned long long _paymentOptions;
    NSArray *_loginArt0115CheckSums;
    NSDictionary *_gateKeepConfiguration;
    NSString *_paymentPop;
    NSString *_loginText;
    NSString *_signUpText;
    NSDictionary *_msisdnCountry;
}

@property(retain, nonatomic) NSDictionary *msisdnCountry; // @synthesize msisdnCountry=_msisdnCountry;
@property(nonatomic) _Bool shouldUseGzip; // @synthesize shouldUseGzip=_shouldUseGzip;
@property(retain, nonatomic) NSString *signUpText; // @synthesize signUpText=_signUpText;
@property(retain, nonatomic) NSString *loginText; // @synthesize loginText=_loginText;
@property(retain, nonatomic) NSString *paymentPop; // @synthesize paymentPop=_paymentPop;
@property(retain, nonatomic) NSDictionary *gateKeepConfiguration; // @synthesize gateKeepConfiguration=_gateKeepConfiguration;
@property(retain, nonatomic) NSArray *loginArt0115CheckSums; // @synthesize loginArt0115CheckSums=_loginArt0115CheckSums;
@property(nonatomic) unsigned long long paymentOptions; // @synthesize paymentOptions=_paymentOptions;
@property(retain, nonatomic) NSArray *domainURLs; // @synthesize domainURLs=_domainURLs;
@property(retain, nonatomic) NSDictionary *urlsConfiguration; // @synthesize urlsConfiguration=_urlsConfiguration;
@property(nonatomic, getter=isLastRelease) _Bool lastRelease; // @synthesize lastRelease=_lastRelease;
@property(nonatomic) unsigned long long serverPolicy; // @synthesize serverPolicy=_serverPolicy;
@property(retain, nonatomic) DZServerMessage *serverMessage; // @synthesize serverMessage=_serverMessage;
- (void).cxx_destruct;
@property(nonatomic) long long timeDifferenceBetweenServerAndApp; // @synthesize timeDifferenceBetweenServerAndApp=_timeDifferenceBetweenServerAndApp;
- (unsigned long long)parsePaymentFromDictionary:(id)arg1;
- (unsigned long long)parsePolicyFromDictionary:(id)arg1;
- (id)initWithMobileAuth:(id)arg1;

@end

