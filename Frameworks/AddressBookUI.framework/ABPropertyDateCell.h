/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIDatePicker, UIViewController;

@interface ABPropertyDateCell : ABPropertySimpleCell <UITextFieldDelegate> {
    UIViewController *_contentViewController;
    UIDatePicker *_datePicker;
}

@property(retain) UIViewController * contentViewController;
@property(retain) UIDatePicker * datePicker;

- (BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (id)contentViewController;
- (void)dateChanged:(id)arg1;
- (id)datePicker;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)localeUpdated:(id)arg1;
- (void)prepareForReuse;
- (void)setContentViewController:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;

@end