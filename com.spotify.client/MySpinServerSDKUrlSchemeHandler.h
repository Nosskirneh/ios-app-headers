//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MySpinLaunchOptions, NSString;

@interface MySpinServerSDKUrlSchemeHandler : NSObject
{
    NSString *urlString;
    MySpinLaunchOptions *launchOptionsFromScheme;
}

@property(copy, nonatomic) MySpinLaunchOptions *launchOptionsFromScheme; // @synthesize launchOptionsFromScheme;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString;
- (void).cxx_destruct;
- (id)generateAuthTokenWithArchivedString:(id)arg1;
- (int)checkIfValidUrlScheme:(id)arg1;
- (int)generateUrlString:(id)arg1;

@end

