/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString, NSCountedSet, NSMutableSet;



@interface DAPowerAssertionManager : NSObject 
{
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary { } *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
}

+ (void)vendDaemons:(Class)arg1;
+ (id)sharedPowerAssertionManager;

- (id)init;
- (void)dealloc;
- (NSUInteger)powerAssertionRetainCount:(id)arg1;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)releasePowerAssertion:(id)arg1;
- (id)stateString;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)_retainAssertions;
- (void)_releaseAssertions;

@end