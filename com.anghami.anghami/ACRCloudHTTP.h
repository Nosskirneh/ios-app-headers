//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACRCloudHTTP : NSObject
{
}

+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)asyncGet:(id)arg1;
+ (void)asyncPost:(id)arg1 str:(id)arg2;
+ (id)connectionQueue;

@end

