//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface EDAMCheckVersion_result : NSObject <NSCoding>
{
    _Bool __success;
    _Bool __success_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSuccess;
- (_Bool)successIsSet;
@property(nonatomic, getter=success, setter=setSuccess:) _Bool success; // @dynamic success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(_Bool)arg1;

@end

