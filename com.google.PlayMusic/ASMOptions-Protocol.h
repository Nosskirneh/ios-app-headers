//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "UDCOptions-Protocol.h"

@protocol GIDBrowserOpener;

@protocol ASMOptions <UDCOptions, NSCopying, NSObject>
@property(readonly, nonatomic) id <GIDBrowserOpener> browserOpener;
@property(readonly, nonatomic) _Bool enableMyGoogle;
@property(readonly, nonatomic) _Bool enableLoggingForAccountSettings;
@property(readonly, nonatomic) long long serverEnvironment;
- (id)copy;
@end

