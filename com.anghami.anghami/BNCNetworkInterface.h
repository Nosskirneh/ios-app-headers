//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BNCNetworkInterface : NSObject
{
    NSString *_interfaceName;
    long long _addressType;
    NSString *_address;
}

+ (id)currentInterfaces;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) long long addressType; // @synthesize addressType=_addressType;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (void).cxx_destruct;
- (id)description;

@end

